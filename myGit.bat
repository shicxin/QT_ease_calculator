@echo off
if "%1"=="" (
    rem 如果没有参数，就使用当前时间作为字符串的值
    set str=%date% %time%
    ) else (
    rem 如果有参数，就使用参数作为字符串的值
    set str=%1
)
git pull origin project
git add -A
git commit -m "%str%"
git push origin project