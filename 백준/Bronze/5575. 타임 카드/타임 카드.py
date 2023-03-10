for i in range(3) :
    h1, m1, s1, h2, m2, s2 = map(int, input().split())
    
    first = (m1 * 60) + (h1 * 3600) + s1
    last = (m2 * 60) + (h2 * 3600) + s2
    
    time = last - first
    
    h = time // 3600
    m = (time % 3600) // 60
    s = (time % 3600) % 60
    
    print(h, m, s)