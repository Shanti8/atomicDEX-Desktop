#pragma once

#include <QObject>

namespace atomic_dex
{
    class MarketMode
    {
        Q_GADGET

      public:
        explicit MarketMode();

        enum e_market_mode
        {
            sell = 0,
            buy  = 1
        };

        Q_ENUM(e_market_mode)
    };
} // namespace atomic_dex

using t_market_mode = atomic_dex::MarketMode::e_market_mode;