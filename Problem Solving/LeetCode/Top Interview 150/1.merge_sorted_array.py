def merge_array(a1, m, a2, n):
    final = []
    i = 0
    j = 0

    while i < m and j < n:
        if a1[i] < a2[j]:
            final.append(a1[i])
            i += 1
        else:
            final.append(a2[j])
            j += 1

    while i < m:
        final.append(a1[i])
        i += 1

    while j < n:
        final.append(a2[j])
        j += 1

    # print(" ".join(map(str, final)))
    print(final)


a1 = [6, 12, 15, 25]
a2 = [3, 5, 8, 12, 15, 18, 20]
merge_array(a1, len(a1), a2, len(a2))


# leetcode solution
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        final = []
        i = 0
        j = 0

        while i < m and j < n:
            if nums1[i] < nums2[j]:
                final.append(nums1[i])
                i += 1
            else:
                final.append(nums2[j])
                j += 1
        while i < m:
            final.append(nums1[i])
            i += 1

        while j < n:
            final.append(nums2[j])
            j += 1

        for k in range(len(final)):
            nums1[k] = final[k]
