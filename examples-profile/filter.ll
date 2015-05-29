; ModuleID = 'filter.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-redhat-linux-gnu"

%struct.bpf_context = type { i64, i64, i64, i64, i64, i64, i64 }

; Function Attrs: nounwind uwtable
define i32 @filter(%struct.bpf_context* nocapture readonly %ctx) #0 {
  %devname = alloca i32, align 4
  store i32 3239269, i32* %devname, align 4
  %1 = getelementptr inbounds %struct.bpf_context* %ctx, i64 0, i32 0
  %2 = load i64* %1, align 8, !tbaa !1
  %3 = inttoptr i64 %2 to i8*
  %4 = bitcast i32* %devname to i8*
  %5 = call i32 inttoptr (i64 3 to i32 (i8*, i8*)*)(i8* %3, i8* %4) #1
  %6 = icmp eq i32 %5, 0
  %. = zext i1 %6 to i32
  ret i32 %.
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.4 (tags/RELEASE_34/final)"}
!1 = metadata !{metadata !2, metadata !3, i64 0}
!2 = metadata !{metadata !"bpf_context", metadata !3, i64 0, metadata !3, i64 8, metadata !3, i64 16, metadata !3, i64 24, metadata !3, i64 32, metadata !3, i64 40, metadata !3, i64 48}
!3 = metadata !{metadata !"long long", metadata !4, i64 0}
!4 = metadata !{metadata !"omnipotent char", metadata !5, i64 0}
!5 = metadata !{metadata !"Simple C/C++ TBAA"}
