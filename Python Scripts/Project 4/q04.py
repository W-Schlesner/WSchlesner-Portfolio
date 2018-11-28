fp1 = open('file.txt', 'r')
text = fp1.read()
fp1.close()

fp2 = open('file_copy.txt', 'w')
fp2.write(text)
fp2.close()
