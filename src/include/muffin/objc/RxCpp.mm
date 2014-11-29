#import "RxCpp.h"

@interface RxCpp

- (RACSignal *)racSignalFromCppSignal:(std::shared_ptr<rxcpp::observable>)rxCppSignal
{
    rxCppSignal.on
}

- (std::shared_ptr<rxcpp::observable>)rxCppSignalFromRacSignal:(RACSignal *)racSignal
{
    [racSignal subscribeNext:];
}

@end
