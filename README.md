Состав команды:
-Дмитрий Никурадзе (@dimadmitry1) - рендеринг моделей при помощи OpenGL
-Глеб Жигулин (@GbPerviy) - разработка UI (не смог по непредвиденным обстоятельствам)
-Матвей Зайцев (@3au4uwkos) - разработка файловой системы и сборка проекта

Как развернуть решение:
Часть @3au4uwkos : скачать ModelView.exe из ветки zaitsev-realease и запустить в программу.
В первой строке передать путь до модели (без ковычек), во второй папку, куда добавить модель

Что получилось:
-Частично разобраться в OpenGL и даже собрать свою модель
-Создать подобие файловой системы для сохранения и считывания модели
-Немного разобраться в CMake и сборке проекта

Что не получилось:
-Интегрировать MangoDB в проект
-Интегрировать Assimple в проект
-Интегрировать Qt для разработки окна приложения.
-Собрать проект воедино.

Выводы:
-Технологии Qt, Assimple, OpenGl сложны для освоения. На них требуется гораздо больше времени.
-Необходимо ещё потренироваться в сборке проектов на c++ (в том числе и в ручную)
-Необходимо лучше изучить Cmake, ибо понимание его работы достаточно слабое
-Изучить интерфейс и принцип работы Visual Studio
