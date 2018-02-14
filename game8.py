coins=int(input('coins='))
while coins ==0:
    coins=int(input('enter coins again='))
p1=int(input('p1='))
while p1==0 or p1==coins:
    p1=int(input('enter p1 again='))
coins=coins-p1
print('coins',coins)
if coins==0:
    print ('p1 is winner')
else:
    p2 =int(input('p2='))
    while p2==0 or p2>(2*p1):
        p2=int(input('enter p2 again='))
    coins=coins-p2
    print('coins',coins)
    if coins==0:
         print ('p2 is winner')
    else:
         while coins !=0:
             p1=int(input('p1='))
             while p1==0 or p1>(2*p2):
                 p1=int(input('enter p1 again='))
             coins=coins-p1
             print('coins',coins)
             if coins==0:
                   print ('p1 is winner')
             else:
                 p2=int(input('p2='))
                 while p2==0 or p2>(2*p1):
                       p2=int(input('enter p2 again='))
                 coins=coins-p2
                 print('coins',coins)
                 if coins==0:
                     print ('p2 is winner')
  
                 
             
