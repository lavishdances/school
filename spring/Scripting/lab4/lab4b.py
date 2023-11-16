birds  =  [ 'sparrow', 'penguin', 'stork', 'canary','hawks eat sparrows', 'hawk' ]
print( birds )
birds[0]        # access the 0th element of the list birds
print( birds[0] )
print(birds[2])
len(birds)
print(len(birds))
print(len( birds[1] ))
birds.append( 'ostrich' )
print(birds)
birds.append('hummingbird')
print(birds)
print(len(birds))
print(birds[7])
birds.insert(3,'condor')
print(birds)
print(birds[3])
birds.insert(5, 'eagle')
print(birds)
print(len(birds))
print(birds[8])
del birds[2]
print(birds)
print(birds[7])
del birds[6]
print(birds)
print(birds[ 2: 5 ])
print(birds[1:3])
print(birds[4:])
print(birds[:3])
print(sorted(birds))
print(birds)
birds.sort()
print(birds)

birds.append('Owl')
print(birds)
birds.sort()
print(birds)

shapes  =  [ 'square', 'triangle', 'circle' ]

fruits  =  [ 'orange', 'pear', 'apple' ]
stuff  =  shapes  +  fruits

print(stuff)
print(len(stuff))
print(stuff[4])
print(stuff[2:5])
print(sorted(stuff))

'circle'  in  stuff
print(list( range( 1,5 ) ))
print(list( range( 3, 7 ) ))
print(list( range( 6, 12 ) ))
vals  =  [ 2, 4, 6, 8, 10 ]
print(min(vals))
print(max(vals))
print(sum(vals))
avg = sum(vals)/6
print(avg)

print(min( shapes ))

pies = ['apple', 'cherry', 'blueberry', 'strawberry', 'grape', 'pumpkin' ]
print(pies)
pies.append('cranberry')
print(pies)

pies.insert(3, 'banana')