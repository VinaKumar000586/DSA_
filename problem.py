#brute force approach
'''

def pair(arr):
     for doll in arr:
          if arr.count(doll)%2!=0:
               return doll
                    
t=int(input())
'''


def doll_dict(arr):
     doll_count={}
     for doll in arr:
          if doll in doll_count:
               doll_count[doll]+=1
          else:
               doll_count[doll]=1
     for doll , count in doll_count.items():
          if count%2!= 0:
               return doll

 
t=int(input())
for _ in range(t):
     arr=[]
     n=int(input())
     for i in range(n):
          number=int(input())
          arr.append(number)
     ob=doll_dict(arr)
     print(ob)

