
" 이 문서는 visual studio 2017을 기반으로 작성 하였습니다 "

# 프로젝트 만들기

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/%EC%84%A4%EC%B9%981.png)

콘솔 응용프로그램을 누르고 이름을 설정한 뒤 확인을 누릅니다!

# 설정

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/설정1.png)

우측 프로젝트 탐색기에서 프로젝트 아이콘에 우클릭을 한 뒤 속성을 클릭합니다.

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/설정2.png)

그러면 프로젝트 속성 페이지가 뜹니다. 페이지 우측의 메뉴중에서 C/C++을 클릭하면 위와같은 화면이 뜨는데 "SDL 검사" 부분을 더블클릭하여 위와 같이 만듭니다.

SDL을 사용안함으로 설정하는 이유는, SDL이 켜져있을 때, 일부 기능이 SDL기능에서 차단함으로 이용하지 못하게 될 수 있습니다.

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/설정3.png)

이후에 미리컴파일된 헤더를 사용하지 않음으로 설정합니다 미리컴파일된 헤더는 C/C++메뉴 옆에 삼각형을 누르면 나오게 됩니다.

C++ 프로젝트에서는 미리컴파일된 헤더를 제공합니다. 하지만 자료구조에서는 iostream이라는 헤더 하나만 필요하기 때문에 이 기능을 쓸 필요는 없습니다.

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/설정4.png)

이어서 미리컴파일된 헤더를 사용하지 않기때문에 stdafx.h, stdafx.cpp, targetver.h를 삭제합니다.

# 데이터 만들기

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/데이터파일만들기1.png)

우측 프로젝트 탐색기에서 리소스 폴더에 마우스커서를 갖다대고 우클릭을 하고 추가에 커서를 갖다대고 새항목을 누릅니다.

기존에 window explorer에서 만든 파일의 경우에는 기존 항목 추가를 이용해 주시기 바랍니다

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/데이터파일만들기2.png)

그러면 새로운 팝업이 뜨게됩니다. 새로뜨는 팝업에서 유틸리티를 클릭하고 텍스트 파일을 선택합니다.

파일명과 확장자명을 설정하고 확인버튼을 클릭합니다.

# 파일입력1

c++은 c의 기본도 포함하고 있습니다. 따라서 c++의 내장 파일읽는 함수보다 비교적 쉽고 속도가 빠른 파일

입력 방법을 두가지 소개하겠습니다

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/파일입력1.png)

첫번째로 freopen()을 쓰는 방법인데요. freopen의 형식은 다음과 같습니다.

FILE *freopen(const char *filename, const char *mode, FILE *stream);

freopen("dat파일의 경로","모드",파일스트림 변수);

경로는 상대경로도 지원하고

모드의 경우엔 "r"이 읽기모드 "w"가 쓰기 모드입니다.

파일스트림에는 일단 stdin을 넣어줍니다. stdin은 standard input의 줄임말로써 저한줄을 

적게되면 console에 입력하는 부분을 파일읽기로 재정의 하는 역할을 하게됩니다.

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/파일입력2.png)

데이터 파일에는 10이 적혀있고 standard input 함수에 해당하는 scanf()를 호출할 시 데이터에서

값을 받아와 다음과 같이 나오게됩니다.

# 파일입력2

![](https://github.com/zaeval/data-structure-example/blob/master/help%20guide/파일입력3.png)

다음으로 FILE 구조체와 fopen을 사용하는 방법입니다.

다음은 fopen의 구조입니다.

FILE *fopen(const char *filename, const char *mode);

fopen("파일 경로","모드");

인자는 freopen과 유사합니다.

하지만 fopen은 파일 구조체로 반환하고 이 파일 구조체를 이용하여 입력을 받는 방식으로 사용하여야합니다.

위 그림과 같이 standard input 함수 앞에 f자를 붙인 함수를 사용하고 그 인자로 fopen으로 연

FILE 구조체를 넘겨주게 되면 됩니다.
