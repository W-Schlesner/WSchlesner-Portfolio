list_to_write = [
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z'
]

fp = open('alphabets.txt', 'w')
for letter in list_to_write:
    fp.write(letter)
    fp.write('\n')
print('Saving file.')
fp.close()
