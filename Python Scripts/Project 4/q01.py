fp = open('file.txt', 'w')
while True:
    to_write = input('Enter text to write in the file [enter "quit" to end]: ')
    if to_write.lower() == 'quit':
        break
    fp.write(to_write)
    fp.write('\n')
print('Saving file.')
fp.close()
