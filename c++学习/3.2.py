user = input('请输入用户名：')
password = input('请输入密码')
if user == 'user123':
    if password == '123':
        print('欢迎使用')
    else:
        print('密码错误')
else:
    print('用户名错误')

#字符串的比较  长度相等则看第一个不相等的字母小写字母>大写字母>数字的ASCII码值，若是不同字符串则比较首个不同字母

# for循环 逐个引用列表数据
sum = 0
a = [1,2,3,4,5,6,7,8,9,10]
for i in a:
    sum += i
print(sum)

for i in range(1,10,2):
    print(i)