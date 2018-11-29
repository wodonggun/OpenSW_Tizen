# ■ 손기성 수석님 오픈SW 

1. Daily coding 생활화 하자!

2. 비전공자와 전공자의 차이를 만들어라.

3. 버그메이커가 되지 말아라. 
- 눈에 보이는 버그가 없다고해서 버그가 없는것은 아니다.
- 성능이 안나오는것도 버그의 일종(최적화 할줄 알아야 한다.)

4. 막노동 개발자가 아닌 소프트웨어 개발자가 되어라.
- API만 사용하는 개발자 (앱 개발자)
- API를 개발하고 사용하는 개발자(플랫폼 개발자)

5. 아름다운 코드를 보고 배워야 한다.
- 아름다운 코드는 그냥 나오는것이 아니고, 좋은것들을 보고 배워야 나오는것이다. 

6. 어떤 코드를 배끼고 익숙해질때까지 노력해서 자기꺼로 만들어라.

7. 개발자의 커뮤니케이션이란 ?
- 일상적인 대화와 자신의 기술을 표현하는 커뮤니케이션이 아닌 소프트웨어에서의 커뮤니케이션은 실력이다.
- 소프트웨어적인 조언이나 리뷰도 실력이 있어야 보이고, 그걸 토대로 고민하고 토의할 줄 알아야 한다.(컨트리뷰터)

8. 개발자의 몸값은 천정부지.
- 앱개발자는 똥값이다.
- 플랫폼개발자의 몸값이 천정부지이다. 

*****
                              정리 : 앱 개발자가 아닌, 플랫폼 개발자가 되자!
*****
　　　
# ■ 직접 TizenRT 컨트리뷰터 

> 처음 다른사람의 프로젝트에 pull request를 해보는거라 구글링이나 문서들을 읽어보고 실수없이 하고자 노력하였다. 

## 1. 하지만 처음 pull request는 처참히 거절 당했다.  
> https://github.com/Samsung/TizenRT/pull/2482

```원인은 TizenRT 포크떠온것이 옛날에 포크떠온 데이터를 기반으로 리퀘스트를 요청해서 conflict가 발생했다.```

![1](https://user-images.githubusercontent.com/35188271/48975737-588d3580-f0bb-11e8-9889-e75082f24043.png)

![2](https://user-images.githubusercontent.com/35188271/48975738-588d3580-f0bb-11e8-962a-6993fec438c8.PNG)

> SungHan-Chang님의 의견을 듣고 conflict부분을 수정하였으나 여전히 빌드 에러 발생. 결국 pull Request를 close시키고 다시 하기로 결정.

<br><br>

## 2. 두번째 pull request 도전 = 알수없는 build 에러
> https://github.com/Samsung/TizenRT/pull/2486
```원인을 파악해보려고 하였지만 바꾼것은 스페이스 -> 탭키로 변경하였지만 빌드 에러가 발생```
![12](https://user-images.githubusercontent.com/35188271/48976093-c6d5f600-f0c3-11e8-86c1-f51c526ec325.PNG)

<br><br>

## 3. 스페이스 -> 탭으로 변경한 주석 정렬을 다시 원상복귀하여 pull request
https://github.com/Samsung/TizenRT/pull/2487

- 드디어 TizenRT pull Request 성공!
![default](https://user-images.githubusercontent.com/35188271/48976506-60a1a100-f0cc-11e8-956d-712dd30d92af.PNG)


## 4. 브랜치 합병 완료

![1](https://user-images.githubusercontent.com/35188271/49210620-e55c2a00-f400-11e8-8563-f2fd03f6c48a.PNG)


<br><br>


# ■ TizenRT 정리 

https://github.com/eksson (타이젠 강의 PPT )

https://developer.tizen.org/ko (타이젠 IoT 실습)

https://developer.tizen.org/ko

https://www.tizen.org

https://review.tizen.org

https://github.com/kosslab-kr  (공부)


# ■ IoT Tizen OS Study


> 타이젠은 리눅스 재단의 오픈소스 OS 프로젝트입니다. 많은 사람들은 삼성전자의 자체적인 OS라고 생각하고있지만 삼성전자는 타이젠 프로젝트의 최대 기여자일 뿐입니다. (삼성은 이전에 사용중인 ‘바다OS’를 버리고 타이젠 프로젝트 참여)

타이젠은 2011년 리눅스 재단에서 개발한 오픈소스 운영체제(OS)이다.
삼성전자는 2012년 첫 타이젠 정식판(1.0버전)을 출시
2013~2015년도(2.0버전)
2016년도(3.0 버전)
2017년도(4.0 버전)
2018년도 연말(5.0 버전 발표 예정)


```
1. IoT에서 가장 중요한 연결성을 가장 빠르고 쉽게 보장한다.
2. 라즈베리파이와 아틱(Artik)을 지원하고 상용화가 가능하다.
3. 타이젠의 모든 플랫폼이 오픈소스로, 누구나 사용해도 라이센스 비용이 없다.
4. 타이젠 4.0버전부터는 비주얼스튜디오를 사용해 앱개발이 가능
5. 저성능 하드웨어에 최적화가 잘되어있어서 속도가 빠르다.
6. 다양한 하드웨어에 쉽게 탑재해 빠르게 개발할 수 있다.
7. 무한한 가능성이 열린 리눅스 기반의 오픈소스
```



# OS 설치 

1. 강의 4번

2. 무선연결
wifi_manager_test

# 용어 정리

GBS Git build system
SCM Source code Management
OBS : open Build system

head - 디스플레이를 필요로하는 IoT
headless - 머리가없는(display) IoT




# 마크다운 정리
- https://gist.github.com/ihoneymon/652be052a0727ad59601




