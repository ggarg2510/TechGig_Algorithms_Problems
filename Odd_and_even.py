def main():
    n=int(input())
    ev=0
    od=0
    ar=list(map(int, input().split()))
    for i in range(0,n):
        if ar[i]%2==0:
            ev=ev+ar[i]
        else:
            od=od+ar[i]
    print(od-ev)

main()