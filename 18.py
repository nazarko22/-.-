class Book:
 
    def display_info(self):
        print("Назва:", self.name)
        print("Автор:", self.author)
        print("Рік видання:", self.year)
        print("Жанр:", self.janr)
        print("------------------------")


print("Введіть число книг:")
ch_knyg=int(input())
book=[0]*ch_knyg

for i in range(ch_knyg):
    
    book[i] = Book()
    print("Введіть назву книги[",i,"]:")
    book[i].name = input()
    print("Введіть автора[",i,"]:")
    book[i].author = input()
    print("Введіть рік видання[",i,"]:")
    book[i].year = input()
    print("Введіть жанр[",i,"]:")
    book[i].janr = input()
    print("------------------------")
    

print("Введіть назву книги для пошуку:")
z_name=input()
print("Введіть автора для пошуку:")
z_author=input()
print("Введіть рік видання для пошуку:")
z_year=input()
print("Введіть жанр для пошуку:")
z_janr=input()
print("Введіть номер для пошуку:")
z_i=input()
print("------------------------")


for i in range(ch_knyg):
    if book[i].name == z_name or book[i].author==z_author or book[i].year==z_year or book[i].janr==z_janr or i==z_i :
         book[i].display_info() 

print("*****Книги до видалення:*****")       
for i in range(ch_knyg):        
    book[i].display_info() 
    
    
print("Введіть номер книги для видалення:")  
delet=int(input())
book.pop(delet)

print("*****Книги після видалення:*****") 
for i in range(ch_knyg):        
    book[i].display_info() 
