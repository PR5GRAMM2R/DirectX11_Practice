#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

namespace hlab
{
    class Eye
    {
    public:
        glm::vec3 pos; // ���� �ܼ�ȭ�� ������ ��ġ�� �ִ� �� ����

        Eye()
        {

        }

        Eye(glm::vec3 pos)
            : pos(pos)
        {

        }
    };
}