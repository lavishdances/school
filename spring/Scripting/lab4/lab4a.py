

applicant = 'Ralph Kramden'
print(applicant[3:])

word = 'Antidisestablishmentarianism'
print (word[4:7])
print(word[7:16])
print(word[16:20])
print(word[7:])
print(word[:20])
print(word[2:5] + word[7:9])
print(word[9:15])
print(word[11:16])

text = 'The quick brown fox jumps over the lazy dog'
print(text[4:9])
print(text[20:24])
print(text[17:19])
print(text[1:3])
print(text[11:14])
print(text[12:15])
print(text[35:])
print(text[20:30])
print(text[1]+ text[36:40])

print(  text.split()  )
print( text.split('e') )

stuff  =  input('Type a word: ')

print(stuff)
print(type(stuff))

num  =  int( stuff )
print(num)
print(type(num))