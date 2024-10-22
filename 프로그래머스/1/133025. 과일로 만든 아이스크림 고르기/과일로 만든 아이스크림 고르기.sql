-- 코드를 입력하세요
SELECT A.FLAVOR
FROM FIRST_HALF A, ICECREAM_INFO B
WHERE A.FLAVOR = B.FLAVOR 
AND TOTAL_ORDER > 3000 
AND A.FLAVOR IN ('peach', 'watermelon', 'mango', 'strawberry', 'melon', 'orange', 'pineapple')
ORDER BY A.TOTAL_ORDER DESC;