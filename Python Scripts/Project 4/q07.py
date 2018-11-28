import pickle


fp = open('dictionary.pickle', 'rb')
dictionary = pickle.load(fp)
fp.close()
print(dictionary)
