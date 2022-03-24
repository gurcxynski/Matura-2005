nums = [6, -2, -6, 5, 7, -3]
max = current = 0
for i in nums:
    if(current + i > 0):
        current += i
        if(current > max):
            max = current
    else: current = 0
print(max)