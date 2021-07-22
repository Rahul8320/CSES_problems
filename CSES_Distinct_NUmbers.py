try:
	# taking inputs
	n = int(input())
	arr = [int(e) for e in input().split()]
	# creating a empty set
	my_set = set()
	# add distinct elements in set
	for e in arr:
		my_set.add(e)

	# print(my_set)
	print(len(my_set)) # print count of distinct elements as this is the length of set.


except:
	pass
