import random


class Character:
    def __init__(self, name, color=None, mood=None, health=None, size=None, quotes=None):
        self.name = name

        if color is None:
            self.color = random.choice(('blue', 'red', 'green', 'orange'))
        else:
            self.color = color

        if mood is None:
            self.mood = random.choice(('happy', 'sad', 'mad'))
        else:
            self.mood = mood

        if health is None:
            self.health = random.randint(0, 100)
        else:
            self.health = health

        if size is None:
            self.size = round(random.random() * 300, 2)
        else:
            self.size = size

        if quotes is None:
            self.quotes = []
        else:
            self.quotes = quotes

    def eat(self):
        self.health += 5

    def change(self):
        self.mood = random.choice(('happy', 'sad', 'mad'))

    def add_quote(self, quote):
        self.quotes.append(quote)

    def talk(self):
        print(random.choice(self.quotes))


char1 = Character('Captain America')
char2 = Character('Iron Man')

print("Character 1's name:", char1.name)
print("Character 2's name:", char2.name)

print("Character 1's color:", char1.color)
print("Character 2's color:", char2.color)

print("Character 1's mood:", char1.mood)
print("Character 2's mood:", char2.mood)

print("Character 1's health:", char1.health)
print("Character 2's health:", char2.health)

print("Character 1's size:", char1.size)
print("Character 2's size:", char2.size)

char1_quotes = ['I am character 1 quote # 1.', 'I am character 1 quote # 2.', 'I am character 1 quote # 3.', 'I am character 1 quote # 4.']
char2_quotes = ['I am character 2 quote # 1.', 'I am character 2 quote # 2.', 'I am character 2 quote # 3.', 'I am character 2 quote # 4.']

for quote in char1_quotes:
    char1.add_quote(quote)

for quote in char2_quotes:
    char2.add_quote(quote)

print("Character 1's quotes:", char1.quotes)
print("Character 2's quotes:", char2.quotes)

print("Character 1 speaks first time:")
char1.talk()
print("Character 2 speaks first time:")
char2.talk()

print("Character 1 speaks second time:")
char1.talk()
print("Character 2 speaks second time:")
char2.talk()
