from translation import Translations as tl
from data import Inputs

class Process:

    def to_morse(text):
        result = []
        for char in text.lower():
            if char in tl.letters:
                result.append(tl.letters[char])
            if char in tl.numbers:
                result.append(tl.letters[char])
        for item in result:
            Inputs.pro_input += f"{item} "
        

    def to_ascii(text):
        ...