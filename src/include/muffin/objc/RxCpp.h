#include <rxcpp/rx.hpp>

@interface RxCpp
- (RACSignal *)racSignalFromCppSignal:(std::shared_ptr<rxcpp::observable>)rxCppSignal;
- (std::shared_ptr<rxcpp::observable>)rxCppSignalFromRacSignal:(RACSignal *)racSignal;
@end
