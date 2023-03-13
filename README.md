## 개요

백트래킹 알고리즘을 사용하여 4 x 4 skyscrapers puzzle의 해답을 찾는 프로그램을 구현하였습니다.

[skyscrapers puzzle 풀어보기](https://www.brainbashers.com/skyscrapers.asp)

4 x 4 skyscrapers puzzle은 주어진 지도를 높이가 1이상 4이하인 건물로 채우는 퍼즐입니다. 단, 이때 각 행과 열에는 같은 높이의 건물을 두 개 이상 배치할 수 없습니다.

또한 아래 그림과 같이 각 방향에서 보는 시야가 주어지면 해당 조건에 맞게 건물을 배치해야 합니다.

![example1](https://user-images.githubusercontent.com/97381683/224586276-1a94c9ea-927e-4677-b1d4-f329990d2f25.PNG)

다음은 위 퍼즐에 대한 해답입니다.

![example2](https://user-images.githubusercontent.com/97381683/224586420-46ad0ee9-38ec-4f67-9cc1-1ac3170255bb.PNG)

## 사용방법

1. make, make all, make skyscrapers 명령어 중 하나로 프로그램을 빌드합니다.

2. **./skyscrapers "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"**
의 형태로 프로그램을 실행합니다. 이때 col1up ... row4right 부분에는 아래 그림에서 해당하는 위치에 주어진 수를 넣어야합니다.

![example3](https://user-images.githubusercontent.com/97381683/224587727-f05bab44-50e3-4751-b687-b3771e686496.PNG)

- 예시

![example4](https://user-images.githubusercontent.com/97381683/224589430-ad689452-b76d-418b-ae08-d8b82f760b2c.PNG)

가능한 답을 찾을 수 없거나 잘못된 형태의 프로그램 인수가 주어지면 Error라고 출력한다.

- 예시

