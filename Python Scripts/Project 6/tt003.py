# the .sort() method of a list
sample_list = [91, 18, 7, 14, 7, -73, -65, -22, 5, -15]
print('Sample list: {}'.format(sample_list))
# calling sample_list with the .sort() function
sample_list.sort()
print('Sorted sample list with .sort() method: {}'.format(sample_list))

# we can see that the .sort() method is < comparing the elements and
# is sorting them in increasing order.
# source and description: https://docs.python.org/3/library/stdtypes.html#list.sort

# our implementation of the sorting method


# our implementation of the sorting algorithm is based on comparing
# the elements of the list going through all the indexes and then swapping
# them based on the result of comparision. this implementation is also
# known as the bubble sort algorithm.
def sort(alist):
    # for each index of the provided list alist
    for i in range(len(alist)):
        # for each index of the alist up to the the last i elements
        # already in place
        for j in range(len(alist)-1-i):
            # if the jth element is greater than te j+1th element
            if alist[j] > alist[j+1]:
                # swap the values of jth and j+1th element using
                # the new variable temp
                temp = alist[j]
                alist[j] = alist[j+1]
                alist[j + 1] = temp


# using our defined sort() method on the list
sample_list = [91, 18, 7, 14, 7, -73, -65, -22, 5, -15]
print('Sample list: {}'.format(sample_list))
# calling sample_list with the sort() function
sort(sample_list)
print('Sorted sample list with our function: {}'.format(sample_list))

check_list_1a = [98, 201, 247, 458, 248, -82, 236, -43, 184, 14]
check_list_1b = [98, 201, 247, 458, 248, -82, 236, -43, 184, 14]
check_list_2a = ['red', 'green', 'blue', 'yellow', 'purple', 'spark', 'fire', 'lava']
check_list_2b = ['red', 'green', 'blue', 'yellow', 'purple', 'spark', 'fire', 'lava']
check_list_3a = ['red', 'Green', 'Schlesner', 'Sparked', 'gloom', 'Elastic', 'earth', 'concrete']
check_list_3b = ['red', 'Green', 'Schlesner', 'Sparked', 'gloom', 'Elastic', 'earth', 'concrete']

print('\n\nSample tests for the original and our function omparing the results:\n')

print('Unsorted list: {}'.format(check_list_1a))
check_list_1a.sort()
sort(check_list_1b)
print('Sorted using .sort(): {}'.format(check_list_1a))
print('Sorted using our function: {}'.format(check_list_1b))
print()
print('Unsorted list: {}'.format(check_list_2a))
check_list_2a.sort()
sort(check_list_2b)
print('Sorted using .sort(): {}'.format(check_list_2a))
print('Sorted using our function: {}'.format(check_list_2b))
print()
print('Unsorted list: {}'.format(check_list_3a))
check_list_3a.sort()
sort(check_list_3b)
print('Sorted using .sort(): {}'.format(check_list_3a))
print('Sorted using our function: {}'.format(check_list_3b))
