#pragma once
#include <stdint.h>

// Disposable compile-only values. Never provision hardware with this file.
static constexpr char RC_PROVISIONED_P4_ID[] = "ci-relay";
static constexpr uint8_t RC_PROVISIONED_P4_KEY[32] = {0};
static constexpr char RC_PROVISIONED_PRIMARY_ID[] = "ci-command";
static constexpr uint8_t RC_PROVISIONED_PRIMARY_KEY[32] = {0};
static constexpr uint8_t RC_COORDINATOR_PRIORITY = 50;
static constexpr uint8_t RC_STORAGE_KEY[32] = {0};
