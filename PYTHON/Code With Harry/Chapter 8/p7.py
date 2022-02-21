def qwerty(i,j):
    str=i.replace("working","pushing")
    return str.strip()
a='''    Consistency matters so keep working hard   '''
d=qwerty(a,"working")
print(a)
print(d)