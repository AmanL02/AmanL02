from typing import Dict


Dict={
    "Shanti": "Aman"

}
print("Options are ", Dict.keys())
a=input("Search for your word:\n")
print("Meaning of ur word is ", Dict.get(a))