![header](https://capsule-render.vercel.app/api?type=transparent&fontColor=703ee5&height=120&section=header&text=Skyscrapers&fontSize=70)

<h3 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#usage">Usage</a>
</h3>

---

## About

This is a program to find the solution to a 4 x 4 skyscrapers puzzle using a backtracking algorithm.

You can try the skyscrapers puzzle at the site below.

[BrainBashers](https://www.brainbashers.com/skyscrapers.asp)

To solve 4 x 4 skyscrapers puzzle, you should fill a given map with buildings that are at least 1 and no more than 4 in height. But, you can't place more than one building of the same height in each row and column.

In addition, the number of buildings that can be seen from each direction is given as a condition as shown below.

![example1](https://user-images.githubusercontent.com/97381683/224586276-1a94c9ea-927e-4677-b1d4-f329990d2f25.PNG)

Here's the solution to the puzzle above.

![example2](https://user-images.githubusercontent.com/97381683/224586420-46ad0ee9-38ec-4f67-9cc1-1ac3170255bb.PNG)

## Usage

1. Build the program with one of the 'make', 'make all', or 'make skyscrapers' commands.

2. Run the program in the form of **./skyscrapers "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"**. Instead of col1up to row4right, you need to put the numbers given in the corresponding positions in the figure below.

![example3](https://user-images.githubusercontent.com/97381683/224587727-f05bab44-50e3-4751-b687-b3771e686496.PNG)

- example

![example4](https://user-images.githubusercontent.com/97381683/224589430-ad689452-b76d-418b-ae08-d8b82f760b2c.PNG)

If no possible solution exists or an invalid form of a program argument is given, it prints 'Error'.

![example5](https://user-images.githubusercontent.com/97381683/224590418-5e9f5d99-02ed-476d-9a72-fefb77d6de94.PNG)
