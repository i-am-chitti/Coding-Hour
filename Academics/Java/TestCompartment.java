import java.math.*;

abstract class Compartment

{

public abstract void Notice();

}

class FirstClass extends Compartment

{

@Override 

public void Notice() { System.out.println("First Class"); }

}

class Ladies extends Compartment

{

@Override 

public void Notice() { System.out.println("Ladies"); }

}

class General extends Compartment

{

@Override 

public void Notice() { System.out.println("General"); }

}

class Luggage extends Compartment

{

@Override 

public void Notice() { System.out.println("Luggage"); }

}

class TestCompartment

{

public static void main(String args[])

{

Compartment A []= new Compartment[10];

int randIntNum=0;

for (int iLoop=0; iLoop<10; iLoop++)

{

randIntNum=0;

while ((randIntNum<1) || (randIntNum>4))

{

randIntNum = (int) (Math.random() *4 + 1);

}

switch (randIntNum)

{

case 1: { A[iLoop] = new FirstClass(); break; }

case 2: { A[iLoop] = new Ladies(); break; }

case 3: { A[iLoop] = new General(); break; }

case 4: { A[iLoop] = new Luggage(); break; }

}

System.out.print(" You are alloted to " + (iLoop+1) +" compartment"); A[iLoop].Notice();

}

}

}