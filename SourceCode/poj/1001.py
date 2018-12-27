#!EOF in C++
while True:
	try:

		y = 1

		#get tow variable from input.
		#x, g = map(str, raw_input().split(" "))

		s=input()
		#Replace

		#SubStr
		x=s[:6]
		g=s[-2:]

		g=int(g)

		#Find
		q=str(x).find(".")
		if q>=1:
			x=float(x)
		else:
			x=int(x)
			q=0

		#Replace
		z=str(x).replace('.','')
		if q!=0: q=len(z)-q
		z=int(z)
		for i in range(g):
		    y=y*z;
		r=q*g
		f=str(y)
		if q!=0: q=len(f)-r
		if r<len(f) and q!=0:
		    #range of matrix
		    print(f[:q]+'.'+f[q:])
		else:
			if q!=0:
			    x=''
			    for i in range(r-len(f)):
			    	x=x+'0'
			    print('.'+x+f)
			else: print(f)
	except:
		break

