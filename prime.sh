#!/bin/bash
echo 2
h=1
k=2
for (( i = 3; i < 10000; i++ )); do #for循环与if判断时注意空格
    s=0
    for (( j = 2; j < i; j++ )); do
        a=i%j
        if [[ a -eq 0 ]]; then #-eq等效于Ｃ语言中的==
            s=1
            break
        fi
    done
    if [[ s -eq 0 ]]; then
        echo $i;
        ((k=k+i)) #在进行自加时要使用((  ))
        ((h=h+1))
    fi
done
echo $h #输出时要加$取值 
echo $k
