-- cte: common table expression. for using cte we need to use 'with' and 'as' keyword
-- cte is used to create a temporary table that can be used in the query. 
-- cte is used to make the query more readable and easy to understand.
-- cte is used to break the query into multiple parts.
-- cte is used to avoid the subquery.


--  ami employee table theke 5 ta record nisi and eta temp variable e save kore rakhsi. temp e record gulo table akare save hoye ase.
WITH TEMP AS (
	SELECT * FROM EMPLOYEES LIMIT 5
)

SELECT * FROM TEMP;