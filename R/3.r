#2
x<- -4
print(abs(x))


x<- 4
print(sqrt(x))


st1<- "Deepak"
print(tolower(st1))


x<- 2.5
print(floor(x))


x<- 4
print(cos(x))
print(sin(x))
print(tan(x))


x<- 4
print(log(x))

a <- "987654321"
substr(a, 3, 6)



#1
x <- c(12,7,3,4.2,18,2,54,-21,8,-5)

result.mean <- mean(x)
print(result.mean)
median.result <- median(x)
print(median.result)

getmode <- function(v) {
  uniqv <- unique(v)
  uniqv[which.max(tabulate(match(v, uniqv)))]
}

v <- c(2,1,2,3,1,2,3,4,1,5,5,3,2,3)

result <- getmode(v)
print(result)



#3
#Factorial program
facto <- function(){
  no = 6
  fact = 1
  for( i in 1:no) {
    fact = fact * i
  }
  print(paste(" The factorial of ", no ,"is", fact ))
}
facto()

#Fibonacci program
fib <- function(){
  nterms=10
  n1 = 0
  n2 = 1
  count = 2
  
  if(nterms <= 0) {
    print("Oops! Enter ")
  } else {
    if(nterms == 1) {
      print("Fibonacci sequence:")
      print(n1)
    } else {
      print("Fibonacci sequence:")
      print(n1)
      print(n2)
      while(count < nterms) {
        nth = n1 + n2
        print(nth)
        # update values
        n1 = n2
        n2 = nth
        count = count + 1
      }
    }
  }
}
fib()



#4. To find odd or even
num = 45
if((num %% 2) == 0) {
  print(paste(num,"is Even"))
} else {
  print(paste(num,"is Odd"))
}

#prime number program
isPrime <- function(num) {
  flag = 0
  if(num > 1) {
    flag = 1
    for(i in 2:(num-1)) {
      if ((num %% i) == 0) {
        flag = 0
        break
      }
    }
  } 
  if(num == 2)    flag = 1
  if(flag == 1) {
    print(paste(num,"is a prime number"))
  } else {
    print(paste(num,"is not a prime number"))
  }
}
isPrime(7)


