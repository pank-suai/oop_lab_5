#import "lib/gost.typ": init

#show: init

= Цель работы

Получение практических навыков при использовании множественного наследования в языке С++.

Закрепить знания по теме: Классы, наследование классов, виртуальные функции, абстрактные классы.

= Выполнение индивидуального задания

Вариант 6.

Иерархия классов представлена на рисунке 

#figure(
    image("images/task.png"),
    caption: "Иерархия классов"
)


= Листинг программы

== Заголовочные файлы

#raw(read("../include/B1.hpp"), lang: "cpp", block: true)

#raw(read("../include/B2.hpp"), lang: "cpp", block: true)

#raw(read("../include/B3.hpp"), lang: "cpp", block: true)

#raw(read("../include/D1.hpp"), lang: "cpp", block: true)

#raw(read("../include/D2.hpp"), lang: "cpp", block: true)

#raw(read("../include/D3.hpp"), lang: "cpp", block: true)

#raw(read("../include/D4.hpp"), lang: "cpp", block: true)

== Файлы реализации

#raw(read("../src/B1.cpp"), lang: "cpp", block: true)

#raw(read("../src/B2.cpp"), lang: "cpp", block: true)

#raw(read("../src/B3.cpp"), lang: "cpp", block: true)

#raw(read("../src/D1.cpp"), lang: "cpp", block: true)

#raw(read("../src/D2.cpp"), lang: "cpp", block: true)

#raw(read("../src/D3.cpp"), lang: "cpp", block: true)

#raw(read("../src/D4.cpp"), lang: "cpp", block: true)

== Основная программа

#raw(read("../src/main.cpp"), lang: "cpp", block: true)

= Скриншоты работы программы

#figure(
  image("images/screenshot.png"),
  caption: "Вывод программы"
)

= Выводы

В ходе выполнения лабораторной работы была реализована иерархия классов с множественным наследованием в языке C++, включая виртуальное наследование для разрешения проблемы "алмаза смерти". Были созданы базовые классы B1, B2, B3 и производные D1, D2, D3, D4 с соответствующими конструкторами, деструкторами и функциями show.

Программа демонстрирует порядок вызова конструкторов и деструкторов при создании объектов производных классов, а также корректную работу функций отображения значений. Виртуальное наследование обеспечило единственный экземпляр класса B3 в иерархии.

Работа позволила закрепить навыки работы с множественным и виртуальным наследованием в C++.
