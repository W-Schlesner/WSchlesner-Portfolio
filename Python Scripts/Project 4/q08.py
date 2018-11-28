import json


nested_dictionary = {
    1: {
        'English': 'One',
        'Roman': 'I'
    },
    2: {
        'English': 'Two',
        'Roman': 'II'
    },
    3: {
        'English': 'Three',
        'Roman': 'III'
    },
    4: {
        'English': 'Four',
        'Roman': 'IV'
    },
    5: {
        'English': 'Five',
        'Roman': 'V'
    },
    6: {
        'English': 'Six',
        'Roman': 'VI'
    },
    7: {
        'English': 'Seven',
        'Roman': 'VII'
    },
    8: {
        'English': 'Eight',
        'Roman': 'VIII'
    },
    9: {
        'English': 'Nine',
        'Roman': 'IX'
    },
    10: {
        'English': 'Ten',
        'Roman': 'X'
    }
}

fp = open('nested_dictionary.json', 'w')
json.dump(nested_dictionary, fp)
fp.close()
