---
# ✅ Full Setup Guide: MariaDB + VS Code on Arch Linux
---

## 🧱 1. Install MariaDB

```bash
sudo pacman -S mariadb

```

---

## 🧰 2. Initialize MariaDB (Only once after install)

```bash
sudo mariadb-install-db --user=mysql --basedir=/usr --datadir=/var/lib/mysql

```

This sets up the system tables in `/var/lib/mysql`.

---

## 🟢 3. Start and enable MariaDB service

```bash
sudo systemctl start mariadb
sudo systemctl enable mariadb

```

✅ To check if it's running:

```bash
sudo systemctl status mariadb

```

---

## 🔒 4. Secure MariaDB (run this once)

```bash
sudo mariadb-secure-installation

```

Answers to prompts:

- Enter current password for root: **(just press Enter)**
- Switch to unix_socket authentication? → `n`
- Change the root password? → `n` _(or `y` if you want)_
- Remove anonymous users? → `y`
- Disallow root login remotely? → `y`
- Remove test database? → `y`
- Reload privilege tables now? → `y`

---

## 👤 5. Create your own user (`jihad`) with full access

### Enter MariaDB shell as root:

```bash
sudo mariadb

```

Then paste these:

```sql
CREATE USER 'jihad'@'localhost' IDENTIFIED BY 'jihad';
GRANT ALL PRIVILEGES ON *.* TO 'jihad'@'localhost' WITH GRANT OPTION;
FLUSH PRIVILEGES;
EXIT;

```

Now user `jihad` can connect without `sudo`.

---

## 🧪 6. Test login as your user

```bash
mariadb -u jihad -p

```

Enter password: `jihad`

You should see:

```
Welcome to the MariaDB monitor...
MariaDB [(none)]>

```

Now you're connected! 🎉

---

## 💻 7. Connect MariaDB to VS Code

### You already installed the VS Code extension `MySQL - Database Client`.

Now add a new connection:

| Option          | Value                                    |
| --------------- | ---------------------------------------- |
| Server Type     | MariaDB                                  |
| Connection Name | anything (e.g. `local-db`)               |
| Host            | `localhost`                              |
| Port            | `3306`                                   |
| Username        | `jihad`                                  |
| Password        | `jihad`                                  |
| Database        | (leave empty or select after connecting) |

Click **Connect**.

Now you can write SQL queries directly in VS Code.

---

## ⚙️ 8. Always start MariaDB on boot

If you enabled it earlier, it will auto-start.

But to manually start/stop/restart:

```bash
sudo systemctl start mariadb     # start
sudo systemctl stop mariadb      # stop
sudo systemctl restart mariadb   # restart

```

---

## 📝 9. Sample SQL to test

```sql
CREATE DATABASE testdb;
USE testdb;

CREATE TABLE students (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(100),
  marks DOUBLE
);

INSERT INTO students (name, marks) VALUES ('Jihad', 88.5), ('Ayaan', 91.0);

SELECT * FROM students;

```

---

## 🧠 Optional: VS Code Tips

- You **don’t need to open MySQL Workbench**.
- VS Code + MariaDB extension is enough.
- Always make sure MariaDB is **running** before trying to connect.

---

## 🧼 10. Troubleshooting Tips

| Problem                        | Solution                                 |
| ------------------------------ | ---------------------------------------- |
| `Can't connect to mysqld.sock` | Run `sudo systemctl start mariadb`       |
| Login fails                    | Double-check username/password           |
| Database not found             | Create it with `CREATE DATABASE dbname;` |

---
