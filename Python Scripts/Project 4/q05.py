lines_to_skip = 10

fp = open('alphabets.txt', 'r')
lines = fp.readlines()
lines_after_skip = lines[lines_to_skip:]
for line in lines_after_skip:
    print(line.strip())
