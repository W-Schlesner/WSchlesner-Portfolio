# question 1
print('Question 1:')
starting_string = 'Small talk is light conversation'
print(starting_string)

# question 2
print('\nQuestion 2:')
q2_slice1 = starting_string[:5]
q2_slice2 = starting_string[6:10]
q2_slice3 = starting_string[11:13]
q2_slice4 = starting_string[14:19]
q2_slice5 = starting_string[20:]
print(q2_slice1)
print(q2_slice2)
print(q2_slice3)
print(q2_slice4)
print(q2_slice5)

# question 3
print('\nQuestion 3:')
q3_string = starting_string.title()
print(q3_string)

# question 4
print('\nQuestion 4:')
q4_list = starting_string.split(' ')
print(q4_list)

# question 5
print('\nQuestion 5:')
q5_string = starting_string.replace(' ', '-')
print(q5_string)

# question 6
print('\nQuestion 6:')
q6_list = q5_string.split('-')
print(q6_list)

# question 7
print('\nQuestion 7:')
q7_string = '.'.join(q6_list)
print(q7_string)

# question 8
print('\nQuestion 8:')
q89_list = ['Let', 'me', 'see', 'if', 'I', 'understand', 'this']
print(q89_list)

# question 9
print('\nQuestion 9:')
q89_list.sort()
print(q89_list)

# question 10
print('\nQuestion 10:')
q1011_list = [56, 23, 18, 32, 94, 37, 82]
print(q1011_list)

# question 11
print('\nQuestion 11:')
q1011_list.sort()
print(q1011_list)

# question 12
print('\nQuestion 12:')
colors_list = ['blue', 'orange', 'violet', 'green', 'red']
print(colors_list)


# question 13
def sort_color(colors):
    order_we_want = ['red', 'orange', 'yellow', 'green', 'blue', 'indigo', 'violet']
    sorted_colors = []
    for color in order_we_want:
        if color in colors:
            sorted_colors.append(color)
    return sorted_colors


print('\nQuestion 13:')
print(sort_color(colors_list))
