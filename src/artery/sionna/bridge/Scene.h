#pragma once

#include <pybind11/pybind11.h>

#include <memory>

namespace artery {
    namespace sionna {

        class Scene : std::enable_shared_from_this<Scene> {
        public:
            static std::shared_ptr<Scene> instance();
        };

    }  // namespace sionna
}  // namespace artery