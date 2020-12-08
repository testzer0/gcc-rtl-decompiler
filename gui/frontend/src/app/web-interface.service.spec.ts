import { TestBed } from '@angular/core/testing';

import { WebInterfaceService } from './web-interface.service';

describe('WebInterfaceService', () => {
  let service: WebInterfaceService;

  beforeEach(() => {
    TestBed.configureTestingModule({});
    service = TestBed.inject(WebInterfaceService);
  });

  it('should be created', () => {
    expect(service).toBeTruthy();
  });
});
