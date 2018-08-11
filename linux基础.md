# linux基础

## 1. 软件安装

源

## 2.相应操作

### 软件更新

sudo apt-get update

### 软件升级

sudo apt-get upgrade

### 管理员权限

apt-get update

无管理员权限 + sudo！！临时赋予管理员权限

### 软件安装

sudo apt-get install

apt-get install ×

### 查找可用软件包

apt-cache search

## 3.闭源系统 Unix MAC APPStore

解决方式 1.Linux 2.VMware ubuntu 3.aliyun Tencent 4.Pi （root）

## 4.命令

### ls

当前目录下所有的文件

### ls -a

查找隐藏文件。隐藏一个文件在该文件名字前加.

### ls -l

查找文件类型

### ls  -a /etc

ls命令 -a选项 /etc执行对象

### cp

拷贝 cp a b c d e  test

在cp命令最后要加一个目录

cp a b

将a 拷贝到b中

### mkdir 184

创建目录 184

### touch a b c d e

如果文件不存在 创建空白文件

### echo a

输出a

### echo a > a

将a读入到a中

### echo $HOME

打印家目录的路径

### cat

强制读出

### cd

打开目录

### cd -

返回上次工作的目录

### cd ..

返回上一个目录

### pwd

打印工作目录

输出路径

### 返回家目录（$HOME）

cd /etc 或 cd ~

### rm

移除

### rm -f -r

### mv

将a移动到b

mv a b c d e test

将a b c d e 移动到test

### HOME=/

变量赋值必须连着写

## 5.LINUX  手册

### man 手册

man + 命令

查找 scp

### tldr + 命令

基于网络的手册

远程用户名缺省时远程用户名和本机用户名相同

### sudo apt-cache search pip | grep "python3" | grep "pip"

|管道

grep限制条件