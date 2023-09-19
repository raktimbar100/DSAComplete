matrix1=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
matrix2=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
matrix3=[
[0,0,0],
[0,0,0],
[0,0,0]

]



mul=0
s=0
e=0
for val1 in range(len(matrix1)):
    
    for val2 in range(len(matrix2)):
        mul=0
        for val3 in range(len(matrix1)):
             mul=mul+matrix1[val1][val3]*matrix2[val3][val2]
             
             #matrix3[val1][val3]=mul
             matrix3[val1][val2]=mul
        #print(mul)
        
for i in matrix3:
    print(i)
