#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > vector(people.size());
    std::size_t         i = people.size();

    for (auto& person : people) {
        person.birthday();

        vector[--i] = person.isMonster() ? 'n' : 'y';
    }

    return vector;
}