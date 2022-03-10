from typing_extensions import Self


class vector2d :
    Vectorx=5
    vectory=10

class vector3d(vector2d):
    z=15

a=vector2d()
b=vector3d()

print(a.Vectorx)
print(a.Vectory)
# print(b.z)