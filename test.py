DNA = {'A':'T','C':'G','T':'A','G':'C'}
d = input()
u = ''
for b in d:
	u = u + DNA[b]
a = 0
t = 0
c = 0
g = 0
for b in d:
	if b =='A':
		a = a + 1
	if b == 'T':
		t = t + 1
	if b == 'C':
		c = c + 1
	if b == 'G':
		g = g + 1
for b in u:
	if b == 'A':
	    a = a + 1
	if b == 'T':
	    t = t + 1
	if b == 'C':
		c = c + 1
	if b == 'G':
	    g = g + 1
print({'A':a,'T':t,'G':g,'C':c})
	    

