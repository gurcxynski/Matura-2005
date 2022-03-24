nums = [ 1, 1, 6, 5, 5, 3, 3, 5 ]
max = (0, 0)
result = { }
for i in nums:
    result[i] = result.setdefault(i, 0) + 1
for i in result.items():
    if(i[1] > max[1]): max = i
print(max[0])