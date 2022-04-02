from msilib.schema import tables


n = int(input("Enter a number: "))
L=[n*i for i in range (1,11)]
print(L)
with open ("tables.txt", 'a') as f:
    f.write(str(L))
    f.write('\n')