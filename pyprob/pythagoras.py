from math import sqrt
from math import hypot
print('Pythagorean theorem calculator! Calculate your triangle sides.\n') 

print('Assume the sides are a, b, c and c is the hypotenuse (the side opposite the right angle') 
formula = input('Which side (a, b, c) do you wish to calculate? side>\n') 

if formula == 'c':

    side_a = int(input('Input the length of side a: '))
    side_b = int(input('Input the length of side b: '))
    side_c = sqrt(hypot(side_a**2 + side_b**2))

    print('The length of side c is: ' )
    print(side_c) 

elif formula == 'a':

    side_b = int(input('Input the length of side b: '))
    side_c = int(input('Input the length of side c: ')) 
    side_a = sqrt(hypot(side_c**2) - (side_b**2))      
        
    print('The length of side a is' )   
    print(side_a) 
    
elif formula == 'b':

    side_a = int(input('Input the length of side a: '))
    side_c = int(input('Input the length of side c: '))
    side_b = sqrt(hypot(side_c**2 - side_a**2))

    print('The length of side b is')
    print(side_b)

else:
    print('Please select a side between a,b,c ')

        