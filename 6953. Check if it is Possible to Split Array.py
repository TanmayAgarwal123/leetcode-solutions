def is_possible_to_reach_target(nums, m):
    if len(nums)<2:
        return True
    left = 0
    right = len(nums) - 1
    while right - left > 1:
        if nums[left] < nums[right]:
            left += 1
        else:
            right -= 1
        return nums[left] + nums[right] >= m
array = [2, 3, 3, 2, 3]
initial_target = 6
result = is_possible_to_reach_target(array, initial_target)
print(result)
