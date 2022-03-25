nums = [-6, -2, -6, 3, -1, 4]
max = nums[0]
current = 0
for i in nums:
    if(i > max): max = i
    if(current + i > 0):
        current += i
        if(current > max):
            max = current
    else: current = 0
print(max)